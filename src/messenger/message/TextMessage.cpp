// Copyright 2013 <Piotr Derkowski>

#include <string>
#include "boost/asio.hpp"
#include "TextMessage.hpp"

namespace remote {

namespace message {


TextMessage::TextMessage(const std::string& message)
  : message_(message)
{ }

inline int TextMessage::size() const {
  return message_.size();
}


}  // namespace message

}  // namespace remote