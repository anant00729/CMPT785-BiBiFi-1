#ifndef FILESYSTEM_APP_UTILS_H
#define FILESYSTEM_APP_UTILS_H

#include <vector>
#include <sstream>
#include <map>
#include <filesystem>
#include <dirent.h>
#include "AppConstants.h"
#include "Randomizer.h"

using namespace std;
using namespace AppConstants::CMDConstants;
using namespace AppConstants::DefaultDirectory;
using namespace filesystem;

struct stat info;

namespace AppUtils {

    class Utils {
        public:

        static Command findCommand(const map<Command, bool> &values) {
            Command result;
            int trueCount = 0;

            for (const auto &[command, value]: values) {
                if (value) {
                    trueCount++;
                    result = command;
                }
            }
        }

        static string joinVectorToString(vector<string> tokens, int fromIndex = 0, string separator = " ") {
            ostringstream result;
            for (vector<string>::iterator it = tokens.begin() + fromIndex; it != tokens.end(); it++) {
                if (it != tokens.begin() + fromIndex) {
                    result << separator;
                }
                result << *it;
            }
            return result.str();
        };        

    };
}



#endif //FILESYSTEM_APP_UTILS_H
