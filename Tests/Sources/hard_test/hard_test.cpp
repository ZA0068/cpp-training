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
























