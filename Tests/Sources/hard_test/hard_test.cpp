#include <gtest/gtest.h>
#include <hard/hard.hpp>

TEST(HardTests, FindFirstCharacterThatRepeats) {
    ASSERT_EQ(Hard::firstRepeat("legolas"), 'l');
    ASSERT_EQ(Hard::firstRepeat("Balrog"),'0');
	ASSERT_EQ(Hard::firstRepeat("Isildur"),'0');
	ASSERT_EQ(Hard::firstRepeat("Gollum"),'l');
	ASSERT_EQ(Hard::firstRepeat("Galadriel"),'a');
	ASSERT_EQ(Hard::firstRepeat("pippin"),'p');
	ASSERT_EQ(Hard::firstRepeat("Saruman"),'a');
}
TEST(HardTests, TweakingLetters) {
    ASSERT_EQ(Hard::tweakLetters("apple",{0,1,-1,0,-1}), "aqold");
    ASSERT_EQ(Hard::tweakLetters("many", {0, 0, 0, -1}), "manx");
	ASSERT_EQ(Hard::tweakLetters("rhino", {1, 1, 1, 1, 1}), "sijop");
	ASSERT_EQ(Hard::tweakLetters("xyz", {1, 1, 1}), "yza");
	ASSERT_EQ(Hard::tweakLetters("abc", {-1, -1, -1}), "zab");
}
TEST(HardTests, FindTheOddInteger) {
    ASSERT_EQ(Hard::findOdd({20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}), 5);
    ASSERT_EQ(Hard::findOdd({1,1,2,-2,5,2,4,4,-1,-2,5}), -1);
	ASSERT_EQ(Hard::findOdd({20,1,1,2,2,3,3,5,5,4,20,4,5}), 5);
	ASSERT_EQ(Hard::findOdd({10}), 10);
	ASSERT_EQ(Hard::findOdd({1,1,1,1,1,1,10,1,1,1,1}), 10);
	ASSERT_EQ(Hard::findOdd({5,4,3,2,1,5,4,3,2,10,10}), 1);
}
TEST(HardTests, LetterDistance) {
    ASSERT_EQ(Hard::letterDistance("house", "fly"), 11);
    ASSERT_EQ(Hard::letterDistance("sharp", "sharq"), 1);
	ASSERT_EQ(Hard::letterDistance("abcde", "bcdef"), 5);
	ASSERT_EQ(Hard::letterDistance("abcde", "a"), 4);
	ASSERT_EQ(Hard::letterDistance("abcde", "e"), 8);
	ASSERT_EQ(Hard::letterDistance("very", "fragile"), 67);
	ASSERT_EQ(Hard::letterDistance("abcde", "Abcde"), 32);
	ASSERT_EQ(Hard::letterDistance("abcde", "A"), 36);
    
}
TEST(HardTests, MakingABox) {
    ASSERT_EQ(Hard::makeBox(1), std::vector<std::string>({"#"}));
    ASSERT_EQ(Hard::makeBox(2), std::vector<std::string>({"##", "##"}));
    ASSERT_EQ(Hard::makeBox(3), std::vector<std::string>({"###", "# #", "###"}));
    ASSERT_EQ(Hard::makeBox(4), std::vector<std::string>({"####", "#  #", "#  #", "####"}));
    ASSERT_EQ(Hard::makeBox(5), std::vector<std::string>({"#####", "#   #", "#   #", "#   #", "#####"}));
    ASSERT_EQ(Hard::makeBox(6), std::vector<std::string>({"######", "#    #", "#    #", "#    #", "#    #", "######"}));
    
}
TEST(HardTests, HowMAnyPrimeNumbersAreThere) {
    ASSERT_EQ(Hard::primeNumbers(20), 8);
	ASSERT_EQ(Hard::primeNumbers(30), 10);
	ASSERT_EQ(Hard::primeNumbers(100), 25);
	ASSERT_EQ(Hard::primeNumbers(200), 46);
	ASSERT_EQ(Hard::primeNumbers(1000), 168);
	ASSERT_EQ(Hard::primeNumbers(-5), 0);
	ASSERT_EQ(Hard::primeNumbers(66), 18);
	ASSERT_EQ(Hard::primeNumbers(133), 32);
	ASSERT_EQ(Hard::primeNumbers(99), 25);
}
TEST(HardTests, ReverseCodingChallenge1) {
    ASSERT_EQ(Hard::mysteryFunc("A4B5C2"), "AAAABBBBBCC");
	ASSERT_EQ(Hard::mysteryFunc("C2F1E5"), "CCFEEEEE");
	ASSERT_EQ(Hard::mysteryFunc("T4S2V2"), "TTTTSSVV");
	ASSERT_EQ(Hard::mysteryFunc("A1B2C3D4"), "ABBCCCDDDD");
}
TEST(HardTests, ConsecutiveNumbers) {
	ASSERT_EQ(Hard::cons({5, 1, 4, 3, 2}), true);
	ASSERT_EQ(Hard::cons({55, 59, 58, 56, 57}), true);
	ASSERT_EQ(Hard::cons({-3, -2, -1, 1, 0}), true);
	ASSERT_EQ(Hard::cons({5, 1, 4, 3, 2, 8}), false);
	ASSERT_EQ(Hard::cons({5, 6, 7, 8, 9, 9}), false);
	ASSERT_EQ(Hard::cons({5, 3}), false);
}
TEST(HardTests, ValidHexCode) {
	ASSERT_EQ(Hard::isValidHexCode("#CD5C5C"), true);
	ASSERT_EQ(Hard::isValidHexCode("#CD5C5C"), true);
	ASSERT_EQ(Hard::isValidHexCode("#EAECEE"), true);
	ASSERT_EQ(Hard::isValidHexCode("#eaecee"), true);
	ASSERT_EQ(Hard::isValidHexCode("#123456"), true);
	ASSERT_EQ(Hard::isValidHexCode("#987654"), true);
	ASSERT_EQ(Hard::isValidHexCode("#CCCCCC"), true);

	ASSERT_EQ(Hard::isValidHexCode("#CD5C58C"), false);
	ASSERT_EQ(Hard::isValidHexCode("#123CCCD"), false);
	ASSERT_EQ(Hard::isValidHexCode("#9876543"), false);
	
	ASSERT_EQ(Hard::isValidHexCode("#ZCCZCC"), false);
	ASSERT_EQ(Hard::isValidHexCode("#Z88Z99"), false); 
	ASSERT_EQ(Hard::isValidHexCode("#CD5C5Z"), false);

	ASSERT_EQ(Hard::isValidHexCode("#Z88!99"), false);
	ASSERT_EQ(Hard::isValidHexCode("#CD5C&C"), false);
	ASSERT_EQ(Hard::isValidHexCode("CD5CD#C"), false);

	ASSERT_EQ(Hard::isValidHexCode("CD5C5C"), false);
}
TEST(HardTests, NumberTwoOrMoreConsecutiveOnes) {
	ASSERT_EQ(Hard::countOnes({1,1,1,1,1}), 1);
	ASSERT_EQ(Hard::countOnes({1, 1, 1, 1, 0}), 1);
	ASSERT_EQ(Hard::countOnes({0, 0, 0, 0, 0}), 0);
	ASSERT_EQ(Hard::countOnes({1, 0, 0, 0, 0}), 0);
	ASSERT_EQ(Hard::countOnes({1, 0, 1, 0, 1}), 0);
	ASSERT_EQ(Hard::countOnes({1, 0, 0, 0, 1, 0, 0, 1, 1, 0}), 1);
	ASSERT_EQ(Hard::countOnes({1, 1, 0, 1, 1, 0, 0, 1, 1}), 3);
	ASSERT_EQ(Hard::countOnes({1, 0, 0, 1, 1, 0, 0, 1, 1}), 2);
	ASSERT_EQ(Hard::countOnes({1, 0, 1, 1, 1, 0, 1, 1, 1}), 2);
	ASSERT_EQ(Hard::countOnes({1, 0, 1, 0, 1, 0, 1, 0}), 0);
	ASSERT_EQ(Hard::countOnes({1, 1, 1, 1, 0, 0, 0, 0}), 1);
	ASSERT_EQ(Hard::countOnes({1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1}), 3);
}
TEST(HardTests, LettersSharedBetweenTwoWords) {
	ASSERT_EQ(Hard::sharedLetters("apple", "meaty"), 2);
	ASSERT_EQ(Hard::sharedLetters("fan", "forsook"), 1);
	ASSERT_EQ(Hard::sharedLetters("spout", "shout"), 4);
	ASSERT_EQ(Hard::sharedLetters("took", "taken"), 2);
	ASSERT_EQ(Hard::sharedLetters("mentor", "terminal"), 5);
	ASSERT_EQ(Hard::sharedLetters("class", "last"), 3);
}
TEST(HardTests, CamelCase_snake_case) {
		// camelCase to snake_case tests
  	ASSERT_EQ(Hard::toSnakeCase("edabit"), "edabit");
	ASSERT_EQ(Hard::toSnakeCase("helloEdabit"), "hello_edabit");
	ASSERT_EQ(Hard::toSnakeCase("isModalOpen"), "is_modal_open");
	ASSERT_EQ(Hard::toSnakeCase("getBackgroundColor"), "get_background_color");
	ASSERT_EQ(Hard::toSnakeCase("isLoading"), "is_loading");
	ASSERT_EQ(Hard::toSnakeCase("x"), "x");

	// snake_case to camelCase tests
	ASSERT_EQ(Hard::toCamelCase("edabit"), "edabit");
	ASSERT_EQ(Hard::toCamelCase("hello_edabit"), "helloEdabit");
	ASSERT_EQ(Hard::toCamelCase("is_modal_open"), "isModalOpen");
	ASSERT_EQ(Hard::toCamelCase("get_background_color"), "getBackgroundColor");
	ASSERT_EQ(Hard::toCamelCase("is_loading"), "isLoading");
	ASSERT_EQ(Hard::toCamelCase("x"), "x");
}



















