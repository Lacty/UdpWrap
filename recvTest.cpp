
//
//  udp���g�p������M���̃e�X�g
//

#include "udp.hpp"

int main() {
  Udp reciever;
  reciever.initAddr(12345, "");

  for (char i : reciever.recieve()) {
    std::cout << i;
  }
}