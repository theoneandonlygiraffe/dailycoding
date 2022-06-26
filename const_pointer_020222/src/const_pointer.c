




int main (int argc , char* argv[]){
  int a = 11111;
  int b = 77777;

  /* pointer to const */
  const int* ptr_const = &a;

  ptr_const = &b;
  //*ptr_const = 99999;

  /* const pointer */
  int* const const_ptr = &a;
  //const_ptr = &b;
  *const_ptr = 99999;





