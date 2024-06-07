/**
 * Copyright 2022-2024 Theai, Inc. dba Inworld AI
 *
 * Use of this source code is governed by the Inworld.ai Software Development Kit License Agreement
 * that can be found in the LICENSE.md file or at https://www.inworld.ai/sdk-license
 */

#include "InworldCharacterPlaybackControl.h"

void UInworldCharacterPlaybackControl::OnCharacterInteractionEnd_Implementation(const FCharacterMessageInteractionEnd& Message)
{
	OnInteractionEnd.Broadcast();
}