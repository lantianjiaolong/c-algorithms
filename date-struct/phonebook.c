#include <cs50.h>
#include <stdio.h>
#include <string.h>

// 定义一个结构体 person，包含两个字符串，一个用于存储名字，一个用于存储电话号码
typedef struct {
  string name;
  string number;
} person;

int main(void) {
  person people[3];

  people[0].name = "David";
  people[0].number = "+1-617-495-1000";

  people[1].name = "John";
  people[1].number = "+1-949-468-2750";

  people[2].name = "Yuliia";
  people[2].number = "+1-617-495-1000";

  string name = get_string("Name: ");
  for (int i = 0; i < 3; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}