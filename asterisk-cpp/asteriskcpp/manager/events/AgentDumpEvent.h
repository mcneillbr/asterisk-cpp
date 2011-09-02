/*
 * AgentDumpEvent.h
 *
 *  Created on: Aug 2, 2011
 *      Author: a-campos
 */

#ifndef AGENTDUMPEVENT_H_
#define AGENTDUMPEVENT_H_

#include "AbstractAgentEvent.h"

namespace asteriskcpp {

/**
 * An AgentDumpEvent is triggered when an agent dumps the caller while listening
 * to the queue announcement.<p>
 * It is implemented in <code>apps/app_queue.c</code>.<p>
 * Available since Asterisk 1.2
 *
 * @since 0.2
 */
class AgentDumpEvent: public AbstractAgentEvent {
public:
	inline static std::string getEventName() {
		return ("AgentDumpEvent");
	}
	AgentDumpEvent(const std::string & values) :
			AbstractAgentEvent(values) {
	}
	virtual ~AgentDumpEvent() {
	}
};

}

#endif /* AGENTDUMPEVENT_H_ */
