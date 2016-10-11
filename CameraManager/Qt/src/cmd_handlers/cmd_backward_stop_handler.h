#ifndef CLOUDSTREAMER_CMD_HANDLERS_CMD_BACKWARD_STOP_HANDLER_H
#define CLOUDSTREAMER_CMD_HANDLERS_CMD_BACKWARD_STOP_HANDLER_H

#include "../interfaces/icmdhandler.h"
#include "../interfaces/iwebsocketclient.h"

#include <QString>
#include <QVariant>

class CmdBackwardStopHandler : public ICmdHandler {
	
	public:
		virtual QString cmd();
		virtual void handle(QJsonObject obj, IWebSocketClient *wsc);
};

#endif // CLOUDSTREAMER_CMD_HANDLERS_CMD_BACKWARD_STOP_HANDLER_H
