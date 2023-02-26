#ifndef FILESYSTEM_APP_MENU_H
#define FILESYSTEM_APP_MENU_H

#include <iostream>
#include <vector>
#include <sstream>
#include <filesystem>
#include <termios.h>
#include <unistd.h>
#include <curses.h>
#include<cstdlib>
#include<cstring>
#include <cstdlib>
#include <dirent.h>
#include <map>
#include <cstdlib>
#include "Auth.h"
#include "Utils.h"
#include "AppConstants.h"
#include "FileEncrypter.h"
#include "CreateUser.h"
#include "Randomizer.h"
#include "RSAEncryption.h"
#include "ShareFile.h"
#include "KeyEncrypter.h"

using namespace std;
using namespace AppUtils;
using namespace AppConstants::DefaultDirectory;


class Menu {

private:

    string username = "";
    vector<string> breadCrumb;
    string current_dir_name = "";
    FileEncrypter enc;
    CreateUser mCreateUser;
    RSAEncryption mRSAEncryption;
    ShareFile mShareFile;
    KeyEncrypter mKeyEncrypter;
    bool is_admin;
    FileEncrypter mFileEncrypter;

public:




};

#endif //FILESYSTEM_APP_MENU_H
