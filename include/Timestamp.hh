#ifndef TIMESTAMP_HH
#define TIMESTAMP_HH
#include <chrono>
#include <string>
#include <sstream>
#include <iomanip>
#define size_t unsigned long
namespace TB {
class Timestamp {
public:
  Timestamp();
  // Timestamp(size_t time); 
  ~Timestamp();

public:
  size_t now();
  std::string toString();
  std::string toFormatString();

};
} // namespace TB

#endif // TIMESTAMP_HH