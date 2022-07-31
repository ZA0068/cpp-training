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
TEST(HardTests, UnoPart1){
	ASSERT_EQ(Hard::canPlay({"yellow 3", "yellow 5", "red 8"}, "red 2"), true);
	ASSERT_EQ(Hard::canPlay({"yellow 3", "yellow 5", "red 8"}, "blue 5"), true);
	ASSERT_EQ(Hard::canPlay({"yellow 3", "blue 5", "red 8", "red 9"}, "green 4"), false);
	ASSERT_EQ(Hard::canPlay({"yellow 3", "red 8"}, "green 2"), false);
	ASSERT_EQ(Hard::canPlay({"yellow 5", "yellow 8", "red 0", "blue 0", "green 4"}, "green 2"), true);
	ASSERT_EQ(Hard::canPlay({}, "green 2"), false);
	ASSERT_EQ(Hard::canPlay({"red 2"}, "red 0"), true);
	ASSERT_EQ(Hard::canPlay({"red 2", "red 8", "red 5"}, "blue 1"), false);
}
TEST(HardTests, FindTheFirstNonRepeatedCharacter) {
  	ASSERT_EQ(Hard::firstNonRepeatedCharacter("the quick brown fox jumps then quickly blows air"), "f");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("the misty examination pleases into the drab county"), "x");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("it was then the darling top met the whispering wing"), "d");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("it was then the frothy word met the round night"), "a");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("is the remind zone better than the section"), "m");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("b"), "b");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("what if the brainy boss ate the afternoon"), "w");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("the sympathetic mixture rejects into the leafy objective"), "p");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter("hheelloo"), "Invalid");
	ASSERT_EQ(Hard::firstNonRepeatedCharacter(""), "Invalid");
}
TEST(HardTests, RepeatingCycle) {
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 3, 1, 2, 3, 1}, 3), true);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 3, 4, 2, 3, 1}, 4), false);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 1, 2, 2}, 2), false);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 1, 2, 1, 2, 1}, 3), false);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 1, 2, 1, 2, 1}, 2), true);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 1, 2, 1, 2, 1}, 4), true);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 1, 1, 1}, 3), true);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 2, 1, 9}, 4), true);
	ASSERT_EQ(Hard::isRepeatingCycle({1, 1, 3, 1, 1}, 7), true);
}
TEST(HardTests, Blackjack) {
	ASSERT_EQ(Hard::overTwentyOne({'A','2','3'}), false);
	ASSERT_EQ(Hard::overTwentyOne({'A', 'J', 'K'}), false);
	ASSERT_EQ(Hard::overTwentyOne({'A', 'J', 'K', 'Q'}), true);
	ASSERT_EQ(Hard::overTwentyOne({'5', '3', '6', '6', '7', '9'}), true);
}
TEST(HardTests, TwoDistinctElements) {
	ASSERT_EQ(Hard::returnUnique({1, 9, 8, 8, 7, 6, 1, 6}), std::vector<int>({9, 7}));
	ASSERT_EQ(Hard::returnUnique({5, 5, 2, 4, 4, 4, 9, 9, 9, 1}), std::vector<int>({2, 1}));
	ASSERT_EQ(Hard::returnUnique({9, 5, 6, 8, 7, 7, 1, 1, 1, 1, 1, 9, 8}), std::vector<int>({5, 6}));
	ASSERT_EQ(Hard::returnUnique({4, 3, 9, 9, 1, 1, 6, 1, 6, 2, 4}), std::vector<int>({3, 2}));
	ASSERT_EQ(Hard::returnUnique({44, 44, 44, 2, 55, 55, 55, 0, 66, 66, 66}), std::vector<int>({2, 0}));
	ASSERT_EQ(Hard::returnUnique({-9, -9, -9, 7, -9, -9, 1}), std::vector<int>({7, 1}));
	ASSERT_EQ(Hard::returnUnique({2, 2, -19, 2, 7, 7, 4, 9, 9, 0, 0, 3, 3, 3}), std::vector<int>({-19, 4}));
}
TEST(HardTests, CombinedConsecutiveSequence) {
	ASSERT_EQ(Hard::consecutiveCombo({1, 4, 5, 7}, {2, 3, 6}), true);
	ASSERT_EQ(Hard::consecutiveCombo({1, 4, 5, 6}, {2, 7, 8, 9}), false);
	ASSERT_EQ(Hard::consecutiveCombo({1, 4, 5, 6}, {2, 3, 7, 8, 10}), false);
	ASSERT_EQ(Hard::consecutiveCombo({7, 5, 4, 1}, {2, 3, 6, 8}), true);
	ASSERT_EQ(Hard::consecutiveCombo({33, 34, 40}, {39, 38, 37, 36, 35, 32, 31, 30}), true);
	ASSERT_EQ(Hard::consecutiveCombo({1, 4, 5, 6}, {2, 3, 7, 8, 10}), false);
	ASSERT_EQ(Hard::consecutiveCombo({44, 46}, {45}), true);
	ASSERT_EQ(Hard::consecutiveCombo({4, 3, 1}, {2, 5}), true);
	ASSERT_EQ(Hard::consecutiveCombo({4, 3, 1}, {2, 5, 7, 6}), true);
	ASSERT_EQ(Hard::consecutiveCombo({4, 3, 1}, {7, 6, 5}), false);
	ASSERT_EQ(Hard::consecutiveCombo({4, 3, 1}, {0, 7, 6, 5}), false);
	ASSERT_EQ(Hard::consecutiveCombo({44, 46}, {45}), true);
}













