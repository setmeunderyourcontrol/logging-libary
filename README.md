# logging-libary - made by voru.
***Usage***:
add the logger.h file into your source / project include it in your file and create a new logger by:
```cpp
	Logger* logger = new Logger();
```

after that you can start using the logger
for example: print information:
```cpp
	logger->info("information"); // print information
```
or you can use the other built in types of prints:
```cpp
	logger->warn("warning"); // print warning
	logger->error("error"); // print error
	logger->success("successful"); // print success
```

or you can print custom message

```cpp
	logger->print("message", "NICKHER", logger->RED);

```
the first arg is for the message and the content itself, the second arg is for the prefix ( between the [] ), the third arg is the color you want the prefix to be printed with.

# Example
main.cpp
```cpp
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
```
