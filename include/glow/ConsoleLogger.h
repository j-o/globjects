#pragma once

#include <glow/AbstractLogHandler.h>
#include <glow/LogMessage.h>

namespace glow 
{

/** \brief Writes LogMessages to stdout.

	This is the default LogMessage handler of glow.

	\see setLoggingHandler
	\see logging.h
*/
class ConsoleLogger : public AbstractLogHandler
{
public:
    virtual void handle(const LogMessage & message) override;

protected:
	std::string levelString(LogMessage::Level level);
};

} // namespace glow
