#ifdef _WIN32
const char userTerm_prompt[28] = "SimpleLinux $ ";
#elif __APPLE__
const char userTerm_prompt[28] = "SimpleLinux \033[93m$ \033[0m";
#elif __linux__
const char userTerm_prompt[28] = "SimpleLinux \033[93m$ \033[0m";
#endif