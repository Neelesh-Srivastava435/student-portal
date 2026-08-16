#include "auth_service.h"

bool authenticateUser(
    const std::string& username,
    const std::string& password
) {
    return !username.empty() && !password.empty();
}