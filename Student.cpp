/**
 * @file Student.cpp
 * @brief Implementation of the Student class.
 * 
 * This file defines the methods and functionality of the Student class,
 * which represents a student's basic information and grades.
 * 
 * @author Your Name
 * @date 2025-01-28
 * @version 1.0
 */

#include <iostream>
#include <string>

/**
 * @class Student
 * @brief A class to represent a student's information and grades.
 * 
 * The Student class allows setting and retrieving a student's name,
 * roll number, and grades, as well as calculating their average grade.
 */
class Student {
private:
    std::string name;  ///< The name of the student.
    int rollNumber;    ///< The roll number of the student.
    double grade1;     ///< Grade in subject 1.
    double grade2;     ///< Grade in subject 2.
    double grade3;     ///< Grade in subject 3.

public:
    /**
     * @brief Constructor to initialize a Student object.
     * @param studentName The name of the student.
     * @param rollNum The roll number of the student.
     * @param g1 Grade in subject 1.
     * @param g2 Grade in subject 2.
     * @param g3 Grade in subject 3.
     */
    Student(const std::string& studentName, int rollNum, double g1, double g2, double g3)
        : name(studentName), rollNumber(rollNum), grade1(g1), grade2(g2), grade3(g3) {}

    /**
     * @brief Prints the student's details.
     */
    void displayDetails() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
    }

    /**
     * @brief Calculates and returns the student's average grade.
     * @return The average grade of the student.
     */
    double calculateAverage() const {
        return (grade1 + grade2 + grade3) / 3.0;
    }
};

/**
 * @brief Main function to demonstrate the Student class.
 * @return Exit status of the program.
 */
int main() {
    // Create a Student object
    Student student("John Doe", 101, 85.5, 90.0, 88.5);

    // Display student details
    student.displayDetails();

    // Calculate and display the average grade
    std::cout << "Average Grade: " << student.calculateAverage() << "\n";

    return 0;
}
