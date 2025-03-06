
int main(void) {
  // Declare variables
  int age = 0;
  char name[20];

  // Ask user for their age and name
  printf("Please enter your age: ");
  scanf("%d", &age);
  printf("Please enter your name: ");
  scanf("%s", name);

  // Print a greeting message
  printf("Hello, %s! You are %d years old.\n", name, age);

  return 0;
}