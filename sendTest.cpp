
//
//  udp���g�p�������M�҂̃e�X�g
//

#include "udp.hpp"

int main() {
  Udp sender;
  sender.initAddr(12345, "127.0.0.1"); // "127.0.0.1"�͎����������Ă���
                                       // �w�肵��IP�A�h���X������PC�ɑ��M�\
  std::vector<char> data;
  std::string str = "hoge";
  for (int i = 0; i < str.size(); i++) {
    data.push_back(str[i]);
  }

  sender.send(data);
}