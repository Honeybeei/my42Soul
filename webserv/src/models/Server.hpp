#ifndef SERVER_HPP_
#define SERVER_HPP_

#include <netinet/in.h>  // for sockaddr_in
#include <sys/socket.h>  // for socket APIs

#include <iostream>

class Server {
 public:
  // constructors & destructor
  Server();
  Server(const Server &src);
  ~Server();
  // operators
  Server &operator=(const Server &rhs);

 protected:
 private:
  // variables
  int fd_;
};

#endif