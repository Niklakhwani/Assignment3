#include "rps_game.h"
#include <string.h>

const char* determine_winner(const char* player1, const char* player2) {
    if (!player1 || !player2) return "Invalid";

    // Check for valid inputs
    if ((strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) ||
        (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0)) {
        return "Invalid";
    }

    // Determine the winner
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    else if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }
    else {
        return "Player2";
    }
}