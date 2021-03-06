PetalburgWoods_EventObjects: @ 85345E4
	object_event 1, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 19, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, PetalburgWoods_EventScript_2906BB, 17
	object_event 2, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 19, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, PetalburgWoods_EventScript_2906BB, 18
	object_event 3, EVENT_OBJ_GFX_AQUA_MEMBER_M, 0, 26, 17, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, 725
	object_event 4, EVENT_OBJ_GFX_MAN_2, 0, 26, 20, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, 0x0, 724
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 45, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgWoods_EventScript_29110F, 1056
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgWoods_EventScript_291102, 1055
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, PetalburgWoods_EventScript_29111C, 1058
	object_event 8, EVENT_OBJ_GFX_BOY_2, 0, 15, 19, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, 0, 0, PetalburgWoods_EventScript_22E210, 0
	object_event 9, EVENT_OBJ_GFX_BUG_CATCHER, 0, 7, 32, 3, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT, 0, 0, 1, 3, PetalburgWoods_EventScript_22E26D, 0
	object_event 10, EVENT_OBJ_GFX_BUG_CATCHER, 0, 4, 14, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 0, 0, 1, 3, PetalburgWoods_EventScript_22E284, 0
	object_event 11, EVENT_OBJ_GFX_BOY_3, 0, 30, 34, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, 0, 0, PetalburgWoods_EventScript_22E219, 0
	object_event 12, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 26, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, PetalburgWoods_EventScript_291129, 1117
	object_event 13, EVENT_OBJ_GFX_GIRL_2, 0, 33, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, PetalburgWoods_EventScript_22E222, 0

PetalburgWoods_MapWarps: @ 853471C
	warp_def 14, 5, 0, 2, MAP_ROUTE104
	warp_def 15, 5, 0, 3, MAP_ROUTE104
	warp_def 16, 38, 0, 4, MAP_ROUTE104
	warp_def 17, 38, 0, 5, MAP_ROUTE104
	warp_def 36, 38, 0, 6, MAP_ROUTE104
	warp_def 37, 38, 0, 7, MAP_ROUTE104

PetalburgWoods_MapCoordEvents: @ 853474C
	coord_event 26, 23, 3, VAR_0x4098, 0, PetalburgWoods_EventScript_22DFD7
	coord_event 27, 23, 3, VAR_0x4098, 0, PetalburgWoods_EventScript_22E079

PetalburgWoods_MapBGEvents: @ 853476C
	bg_event 14, 32, 3, BG_EVENT_PLAYER_FACING_ANY, PetalburgWoods_EventScript_22E25B
	bg_hidden_item_event 39, 35, 3, ITEM_POTION, 58
	bg_hidden_item_event 26, 6, 3, ITEM_TINY_MUSHROOM, 59
	bg_hidden_item_event 40, 29, 3, ITEM_TINY_MUSHROOM, 60
	bg_hidden_item_event 4, 19, 3, ITEM_POKE_BALL, 61
	bg_event 11, 8, 3, BG_EVENT_PLAYER_FACING_ANY, PetalburgWoods_EventScript_22E264

PetalburgWoods_MapEvents:: @ 85347B4
	map_events PetalburgWoods_EventObjects, PetalburgWoods_MapWarps, PetalburgWoods_MapCoordEvents, PetalburgWoods_MapBGEvents

