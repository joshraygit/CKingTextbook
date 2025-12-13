#include <stdio.h>
#define STUDENTS 5
#define QUIZZES 5

int main() {
    int grades[STUDENTS][QUIZZES], i, j, studentSums[STUDENTS] = {0}, quizSums[QUIZZES] = {0}, studTotal, highScore, lowScore;

    for (i = 0; i < STUDENTS; i++) {
        printf("Enter student %d's grades: ", i + 1);
        for (j = 0; j < QUIZZES; j++) {
            scanf("%d", &grades[i][j]);
            studentSums[i] += grades[i][j];
            quizSums[j] += grades[i][j];
        }
    }

    printf("\nStudent:\t");
    for (i = 0; i < STUDENTS; i++)
        printf("\t%d", i + 1);

    printf("\nStudent totals:\t");
    for (i = 0; i < STUDENTS; i++)
        printf("\t%d", studentSums[i]);
    
    printf("\nStudent averages:");
    for (i = 0; i < STUDENTS; i++)
        printf("\t%.1f", (float) studentSums[i] / QUIZZES);

    printf("\n\nQuiz:\t\t");
    for (j = 0; j < QUIZZES; j++)
        printf("\t%d", j + 1);

    printf("\nAverage score:\t");
    for (j = 0; j < QUIZZES; j++)
        printf("\t%.1f", (float) quizSums[j] / STUDENTS);

    printf("\nHigh score:\t");
    for (j = 0; j < QUIZZES; j++) {
        for (i = 0, highScore = 0; i < STUDENTS; i++) {
            if (grades[i][j] > highScore)
                highScore = grades[i][j];
        }
        printf("\t%d", highScore);
    }
    
    printf("\nLow score:\t");
    for (j = 0; j < QUIZZES; j++) {
        for (i = 0, lowScore = 100; i < STUDENTS; i++) {
            if (grades[i][j] < lowScore)
                lowScore = grades[i][j];
        }
        printf("\t%d", lowScore);
    }

    return 0;
}