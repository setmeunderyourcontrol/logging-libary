#include "logger.h"


int main()
{
	SetConsoleTitleA("logging-libary - Example");

	Logger* logger = new Logger();

	logger->info("information"); // print information
	logger->warn("warning"); // print warning
	logger->error("error"); // print error
	logger->success("successful"); // print success
	logger->print("ss", "NICKHER", logger->RED); // custom print , first is the message, second is the string that between [], third is the color.
	std::cin.get();
	return 0;
}