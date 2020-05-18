#include "gtest/gtest.h"

#include <string>

char u8MoveRover(char ArrayCommands);

/*TEST(should, pass) {
    ASSERT_EQ(1+1, 2);
 }*/

/*TEST(should, fail) {
    ASSERT_EQ("Oui", "NON");
}
 */

TEST(RoveMove_b, pass)
{
  ASSERT_EQ(u8MoveRover('b'), 'b');
}

TEST(RoveMove_f, pass)
{
  ASSERT_EQ(u8MoveRover('f'), 'f');
}

TEST(RoveMove_l, pass)
{
  ASSERT_EQ(u8MoveRover('l'), 'l');
}

TEST(RoveMove_r, pass)
{
  ASSERT_EQ(u8MoveRover('r'), 'r');
}


char u8MoveRover(char ArrayCommands)
{
  static int x = 100;
  static int y = 100;
  char FaceDirection;
  char Output[50];

  if (ArrayCommands == 'b')
  {
    return 'b';
  }
  else if (ArrayCommands == 'l')
  {
    return 'l';
  }
  else if (ArrayCommands == 'f')
  {
    return 'f';
  }
  else if (ArrayCommands == 'r')
  {
    return 'r';
  }
  else
  {
    return 0;
  }

}
