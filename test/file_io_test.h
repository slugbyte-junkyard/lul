#include "test.h"

void on_read(bool failed,void *buf){
  puts("FUCK YEA HIT ON_READ TEST FILE CALLBACK");
}

void on_fail(bool failed,void *buf){
}

MU_TEST(file_io_test){
  describe("it should run z tests"){
    file_read_buffer("./makefile", on_read);

  }
}