#include <iostream>
#include<fstream>
#include"library/input.h"
#include"library/proses.h"
#include"library/output.h"


int main() {
  Input input;
  input.cetak();
  input.toFile();
  Proses proses;
  proses.getdata();
  proses.toFile();
  Output output;
  output.getData();
  output.cetak();
  output.toFile();
  return 0;
}