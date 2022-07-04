#include <easy/easy.hpp>
#include <gtest/gtest.h>

// TEST(EasyTests, AbsoluteSum) {
//      ASSERT_EQ(Easy::getAbsSum([2, -1, 4, 8, 10]), 25);
// }

TEST(EasyTests, CountSyllables) {
     ASSERT_EQ(Easy::numberSyllables("buf-fet"), 2);
     ASSERT_EQ(Easy::numberSyllables("beau-ti-ful"), 3);
     ASSERT_EQ(Easy::numberSyllables("mon-u-men-tal"), 4);
     ASSERT_EQ(Easy::numberSyllables("on-o-mat-o-poe-ia"), 6);
     ASSERT_EQ(Easy::numberSyllables("o-ver-ly"), 3);
     ASSERT_EQ(Easy::numberSyllables("pas-try"), 2);
     ASSERT_EQ(Easy::numberSyllables("flu-id"), 2);
     ASSERT_EQ(Easy::numberSyllables("syl-la-ble"), 3);
}