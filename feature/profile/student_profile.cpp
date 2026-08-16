#include <iostream>

#include "student_profile.h"

void displayProfile(const StudentProfile& student) {
    std::cout << "Student: " << student.name << '\n';
    std::cout << "Semester: " << student.semester << '\n';
}