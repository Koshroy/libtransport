/*
 * Copyright (c) 2012 Jan Kaluza
 * Licensed under the Simplified BSD license.
 * See Documentation/Licenses/BSD-simplified.txt for more information.
 */

#pragma once

#include <boost/optional.hpp>

#include <Swiften/Elements/PubSubSubscriptionPayload.h>
#include <Swiften/Parser/GenericPayloadTreeParser.h>
#include <Swiften/Parser/PayloadParsers/MUCItemParser.h>

namespace Swift {
	class PayloadParserFactoryCollection;
	class PubSubSubscriptionPayloadParser : public GenericPayloadTreeParser<PubSubSubscriptionPayload> {
		public:
			PubSubSubscriptionPayloadParser(PayloadParserFactoryCollection* collection) : factories(collection) {}
			virtual void handleTree(ParserElement::ref root);
		private:
			PayloadParserFactoryCollection* factories;
	};
}
