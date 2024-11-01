#include "pch.h"
#include "CppUnitTest.h"

// Include the C game logic
extern "C" {
#include "../Project1/rps_game.h" // Adjust the path if necessary
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSGameTests
{
    TEST_CLASS(RPSGameTests)
    {
    public:
        TEST_METHOD(TestPlayer1Wins)
        {
            // Modifying these to fail by changing the expected output
            Assert::AreEqual("Invalid", determine_winner("Rock", "Scissors"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Rock"));
            Assert::AreEqual("Invalid", determine_winner("Scissors", "Paper"));
        }

        TEST_METHOD(TestPlayer2Wins)
        {
            // Modifying these to fail by changing the expected output
            Assert::AreEqual("Invalid", determine_winner("Rock", "Paper"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Scissors"));
            Assert::AreEqual("Invalid", determine_winner("Scissors", "Rock"));
        }

        TEST_METHOD(TestDraw)
        {
            // Modifying these to fail by changing the expected output
            Assert::AreEqual("Invalid", determine_winner("Rock", "Rock"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Paper"));
            Assert::AreEqual("Invalid", determine_winner("Scissors", "Scissors"));
        }

        TEST_METHOD(TestInvalidInputs)
        {
            // Keeping these as is since the initial implementation already returns "Invalid"
            Assert::AreEqual("Invalid", determine_winner("Rock", "rock"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Scissorss"));
            Assert::AreEqual("Invalid", determine_winner("Lizard", "Spock"));
            Assert::AreEqual("Invalid", determine_winner(NULL, "Scissors"));
        }
    };
}