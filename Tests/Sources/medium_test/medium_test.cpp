#include <gtest/gtest.h>
#include <medium/medium.hpp>

TEST(MediumTests, QuadraticEquation) {
    ASSERT_EQ(Medium::quadraticEquation(1, 2, -3), 1);
    ASSERT_EQ(Medium::quadraticEquation(2, -7, 3), 3);
    ASSERT_EQ(Medium::quadraticEquation(1, -12, -28), 14);
    
}
TEST(MediumTests, OddUp,EvenDown-NTimes) {
    ASSERT_EQ(Medium::evenOddTransform({3, 4, 9}, 3), std::vector<int>({9, -2, 15}));
    ASSERT_EQ(Medium::evenOddTransform({0, 0, 0}, 10), std::vector<int>({-20, -20, -20}));
    ASSERT_EQ(Medium::evenOddTransform({1, 2, 3}, 1), std::vector<int>({3, 0, 5}));
    ASSERT_EQ(Medium::evenOddTransform({55, 90, 830}, 2), std::vector<int>({59, 86, 826}));
}
TEST(MediumTests, ToyCarWorkshop) {
    ASSERT_EQ(Medium::cars(2, 48, 76), 0);
    ASSERT_EQ(Medium::cars(43, 15, 87), 10);
    ASSERT_EQ(Medium::cars(88, 37, 17), 8);
    ASSERT_EQ(Medium::cars(3, 29, 5), 0);
    ASSERT_EQ(Medium::cars(88, 50, 83), 22);
    ASSERT_EQ(Medium::cars(736, 430, 851), 184);
    ASSERT_EQ(Medium::cars(959, 331, 537), 239);

}
TEST(MediumTests, DoubleCharacterSwap) {
    ASSERT_EQ(Medium::doubleSwap("aabbccc", 'a', 'b'), "bbaaccc");
	ASSERT_EQ(Medium::doubleSwap("random w#rds writt&n h&r&", '#', '&'), "random w&rds writt#n h#r#");
	ASSERT_EQ(Medium::doubleSwap("128 895 556 788 999", '8', '9'), "129 985 556 799 888");
	ASSERT_EQ(Medium::doubleSwap("mamma mia", 'm', 'a'), "amaam aim");
	ASSERT_EQ(Medium::doubleSwap("**##**", '*', '#'), "##**##");
	ASSERT_EQ(Medium::doubleSwap("123456789", '4', '5'), "123546789");
	ASSERT_EQ(Medium::doubleSwap("445566&&", '4', '&'), "&&556644");
	ASSERT_EQ(Medium::doubleSwap("!?@,.", ',', '.'), "!?@.,");
	ASSERT_EQ(Medium::doubleSwap("Q_Q T_T =.= >.<", 'Q', 'T'), "T_T Q_Q =.= >.<");
	ASSERT_EQ(Medium::doubleSwap("(Q_Q) (T_T) (=.=) (>.<)", ')', '('), ")Q_Q( )T_T( )=.=( )>.<(");
	ASSERT_EQ(Medium::doubleSwap("<>", '>', '<'), "><");
	ASSERT_EQ(Medium::doubleSwap("001101", '1', '0'), "110010");
	ASSERT_EQ(Medium::doubleSwap("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 'a', 'b'),"!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bacdefghijklmnopqrstuvwxyz{|}~");
    
}
TEST(MediumTests, CensoredStrings) {
    ASSERT_EQ(Medium::uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo"), "Where did my vowels go?");
    ASSERT_EQ(Medium::uncensor("abcd", ""), "abcd");
    ASSERT_EQ(Medium::uncensor("Ch**s*, Gr*mm*t -- ch**s*", "eeeoieee"), "Cheese, Grommit -- cheese");
    ASSERT_EQ(Medium::uncensor("*l*ph*nt", "Eea"), "Elephant");
}
TEST(MediumTests, CountLettersInAWordSearch) {
    ASSERT_EQ(Medium::letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'D'), 3);
    ASSERT_EQ(Medium::letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'H'), 2);
    ASSERT_EQ(Medium::letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'Z'), 1);
    ASSERT_EQ(Medium::letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'R'), 2);
    ASSERT_EQ(Medium::letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'X'), 1);
    ASSERT_EQ(Medium::letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'S'), 3);
}
TEST(MediumTests, SimulateTheGameRockPaperScissors) {
    ASSERT_EQ(Medium::rps("rock", "paper"), "Player 2 wins");
    ASSERT_EQ(Medium::rps("rock", "scissors"), "Player 1 wins");
    ASSERT_EQ(Medium::rps("scissors", "paper"), "Player 1 wins");
    ASSERT_EQ(Medium::rps("scissors", "rock"), "Player 2 wins");
    ASSERT_EQ(Medium::rps("scissors", "scissors"), "TIE");
    
}
TEST(MediumTests, FindTheDiscount) {
    ASSERT_EQ(Medium::dis(100, 75), 25);
    ASSERT_EQ(Medium::dis(211, 50), 105.5);
    ASSERT_EQ(Medium::dis(593, 61), 231.27);
    ASSERT_EQ(Medium::dis(1693, 80), 338.6);
    ASSERT_EQ(Medium::dis(700, 10), 630);
}
TEST(MediumTests, SumOfOddAndEvenNumbers) {
    ASSERT_EQ(Medium::sumOddAndEven({1, 2, 3, 4, 5, 6}), std::vector<int>({12, 9}));
    ASSERT_EQ(Medium::sumOddAndEven({-1, -2, -3, -4, -5, -6}), std::vector<int>({-12, -9}));
    ASSERT_EQ(Medium::sumOddAndEven({0, 0}), std::vector<int>({0, 0}));
    ASSERT_EQ(Medium::sumOddAndEven({}), std::vector<int>({0, 0}));
}
TEST(MediumTests, SpinAround_TouchTheGround) {
    ASSERT_EQ(Medium::spinAround({"left", "right", "left", "right"}), 0);
    ASSERT_EQ(Medium::spinAround({"right", "right", "right", "right", "right", "right", "right", "right"}), 2);
    ASSERT_EQ(Medium::spinAround({"left", "left", "left", "left"}), 1);
    ASSERT_EQ(Medium::spinAround({}), 0);
    ASSERT_EQ(Medium::spinAround({"left"}), 0);
    ASSERT_EQ(Medium::spinAround({"right"}), 0);
    ASSERT_EQ(Medium::spinAround({"right", "right", "right", "left", "right", "right"}), 1);
    ASSERT_EQ(Medium::spinAround({"left", "left", "right", "left", "left", "left", "left", "left", "left", "right", "left", "left", "right", "right", "right", "right", "left", "left", "right", "right"}), 1);
    ASSERT_EQ(Medium::spinAround({"right", "left", "left", "right", "left", "left", "right", "left", "right", "right", "left", "left", "right", "right", "right", "left", "left", "right"}), 0);
    ASSERT_EQ(Medium::spinAround({"right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right"}), 10);
    ASSERT_EQ(Medium::spinAround({"left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left"}), 10);
};
TEST(MediumTests, PingPong) {
    ASSERT_EQ(Medium::pingPong({"Ping!"}, true), std::vector<string>({"Ping!", "Pong!"}));
    ASSERT_EQ(Medium::pingPong({"Ping!", "Ping!"}, false), std::vector<string>({"Ping!", "Pong!", "Ping!"}));
    ASSERT_EQ(Medium::pingPong({"Ping!", "Ping!", "Ping!"}, true), std::vector<string>({"Ping!", "Pong!", "Ping!", "Pong!", "Ping!", "Pong!"}));
}
TEST(MediumTests, XORSwapAlgoritm) {
    ASSERT_EQ(Medium::XOR(10, 20), std::make_pair(20, 10));
    ASSERT_EQ(Medium::XOR(1, 2), std::make_pair(2, 1));
    ASSERT_EQ(Medium::XOR(555, 666), std::make_pair(666, 555));
	ASSERT_EQ(Medium::XOR(3434, 4343), std::make_pair(4343, 3434));
	ASSERT_EQ(Medium::XOR(5, 6), std::make_pair(6, 5));
	ASSERT_EQ(Medium::XOR(666, 999), std::make_pair(999, 666));
}
TEST(MediumTests, PerfectSquarePatch) {
    ASSERT_EQ(Medium::squarePatch(3), std::vector<std::vector<int>>({{3, 3, 3}, {3, 3, 3}, {3, 3, 3}}));
    
}




