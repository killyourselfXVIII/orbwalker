#pragma once

namespace Functions {
	using fnPrintChat = void(__thiscall*)(uintptr_t, const char*, int);
	using fnIssueOrder = int(__thiscall*)(uintptr_t, int, int, int, int, int, char);
	using fnGetAttackCastDelay = double(__cdecl*)(const Object*);
	using fnGetAttackDelay = double(__cdecl*)(const Object*);
	using fnIsAlive = bool(__thiscall*)(const Object*);
	using fnGetRadius = double(__thiscall*)(const Object*);
	extern fnPrintChat PrintChat;
	extern fnIssueOrder IssueOrder;
	extern fnGetAttackCastDelay GetAttackCastDelay;
	extern fnGetAttackDelay GetAttackDelay;
	extern fnIsAlive IsAlive;
	extern fnGetRadius GetRadius;
	void Initialize();
	bool IsChatOpen();
	bool IsLeagueInBackground();
	uint64_t GetGameTime();
};