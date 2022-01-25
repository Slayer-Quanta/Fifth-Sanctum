#pragma once
#ifndef _STATEMANAGER_H_
#define _STATEMANAGER_H_

#include "States.h"
#include <vector>

// We're going to make StateManager a "static class".
class StateManager
{
private: // Private properties.
	static std::vector<State*> s_states; // s_ is my convention for static member.
private: // Private methods.
	StateManager() = default;  // Prevents instantiation. Don't need object for static class.

public: // Public Methods.
	static void Update();
	static void Render();
	static void PushState(State* pState);
	static void PopState();
	static void ChangeState(State* pState);
	static void Quit();
	static std::vector<State*>& GetStates();
};
typedef StateManager STMA;
#endif

