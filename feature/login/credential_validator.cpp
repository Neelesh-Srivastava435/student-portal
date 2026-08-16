#include <string>

bool validateCredentials(
    const std::string& username,
    const std::string& password
) {
    if (username.length() < 3) {
        return false;
    }

    return password.length() >= 8;
}