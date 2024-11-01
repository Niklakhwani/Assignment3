// test_rps_game.cpp
#include "pch.h"
#include "CppUnitTest.h"

// Include the game logic header and use extern "C" to link with C code.
extern "C" {
#include "../Project1/rps_game.h" // Adjust the path if necessary
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSGameTests
{
    TEST_CLASS(RPSGameTests)
    {
    public:

        // Test case for Player1 winning scenarios
        TEST_METHOD(TestPlayer1Wins)
        {
            Assert::AreEqual("Player1", determine_winner("Rock", "Scissors"));
            Assert::AreEqual("Player1", determine_winner("Paper", "Rock"));
            Assert::AreEqual("Player1", determine_winner("Scissors", "Paper"));
        }

        // Test case for Player2 winning scenarios
        TEST_METHOD(TestPlayer2Wins)
        {
            Assert::AreEqual("Player2", determine_winner("Rock", "Paper"));
            Assert::AreEqual("Player2", determine_winner("Paper", "Scissors"));
            Assert::AreEqual("Player2", determine_winner("Scissors", "Rock"));
        }

        // Test case for Draw scenarios
        TEST_METHOD(TestDraw)
        {
            Assert::AreEqual("Draw", determine_winner("Rock", "Rock"));
            Assert::AreEqual("Draw", determine_winner("Paper", "Paper"));
            Assert::AreEqual("Draw", determine_winner("Scissors", "Scissors"));
        }

        // Test case for Invalid inputs
        TEST_METHOD(TestInvalidInputs)
        {
            Assert::AreEqual("Invalid", determine_winner("Rock", "rock"));
            Assert::AreEqual("Invalid", determine_winner("Paper", "Scissorss"));
            Assert::AreEqual("Invalid", determine_winner("Lizard", "Spock"));
            Assert::AreEqual("Invalid", determine_winner(NULL, "Scissors"));
        }
    };
}