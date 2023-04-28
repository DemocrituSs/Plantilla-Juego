#include "Game.h"
#include "raylib.h"

Game::Game()
{

}
Game::~Game()
{

}
//M�todos m�s importantes
void Game::Initialize()
{

}
void Game::Runloop()
{
	while (!WindowShouldClose())
	{
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}
void Game::Shutdown()
{
	CloseWindow();
}
//M�todos del loop de juego
void Game::ProcessInput()
{

}
void Game::UpdateGame()
{

}
void Game::GenerateOutput()
{
	BeginDrawing();
	ClearBackground(BLACK);
	EndDrawing();
}