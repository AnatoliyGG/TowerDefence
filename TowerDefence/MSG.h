#pragma once
#include "GameObject.h"

enum class MsgType {Move, Death, Create, DealDmg};

struct MSG
{
	MsgType type;
	GameObject* sender;
	union {
		struct {
			Vector2 old_position;
		} mode;
		
		struct {
			GameObject* who_to_die;
			GameObject* killer;
		} death;

		struct {
			GameObject* new_object;
		} create;
		
		struct {
			float damage;
			GameObject* to_who;
			GameObject* by_whom;
		} deal_dmg;
	};
};