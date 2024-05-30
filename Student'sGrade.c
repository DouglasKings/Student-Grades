#include <stdio.h>

// Function prototype
char calculateGrade(float quizScore, float midtermScore, float finalScore);

int main() {
    float quizScore, midtermScore, finalScore;
    char Grade;

    // Prompting the user to input scores
    printf("Enter the quiz score: ");
    scanf("%f", &quizScore);
    printf("Enter the midterm score: ");
    scanf("%f", &midtermScore);
    printf("Enter the final score: ");
    scanf("%f", &finalScore);

    // Calling the function to calculate the grade
    Grade = calculateGrade(quizScore, midtermScore, finalScore);

    // Printing the grade
    printf("The quiz score: %.2f \n");
    printf("The midterm score: %.2f \n");
    printf("The final score: %.2f \n");
    printf("The grade is: %c\n", Grade);

    return 0;
}

// Function to calculate the grade
char calculateGrade(float quizScore, float midtermScore, float finalScore) {
    float totalScore = quizScore + midtermScore + finalScore;
    float averageScore = totalScore / 3; 

    if (averageScore >= 90) {
        return 'A';
    } else if (averageScore >= 70) {
        return 'B';
    } else if (averageScore >= 50) {
        return 'C';
    } else {
        return 'F';
    }
}