#pragma once

#include <pebble.h>

void init_hand_layer(Layer * root_layer);
void deinit_hand_layer();
void mark_dirty_hand_layer();