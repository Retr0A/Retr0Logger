#pragma once

namespace Retr0Logger {

	enum MessageType
	{
		info,
		success,
		warning,
		error,
		criticalError
	};

	class Log
	{
	public:
		Log();
		~Log();

		static void PrintLine(const char* message, MessageType type);
	};

}