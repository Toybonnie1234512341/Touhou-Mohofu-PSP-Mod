
/*---------------------------------------------------------
	�����͕핗 �` Toho Imitation Style.
	http://mohou.huuryuu.com/
	-------------------------------------------------------
---------------------------------------------------------*/

/*
	SDL_mixer:	An audio mixer library based on the SDL library
	Copyright (C) 1997-2004 Sam Lantinga

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Library General Public
	License as published by the Free Software Foundation; either
	version 2 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Library General Public License for more details.

	You should have received a copy of the GNU Library General Public
	License along with this library; if not, write to the Free
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

	This is the source needed to decode an Ogg Vorbis into a waveform.
	This file by Vaclav Slavik (vaclav.slavik@matfyz.cz).
*/

/* $Id: load_ogg.h,v 1.2 2004/01/04 17:37:04 slouken Exp $ */

#if defined(OGG_MUSIC)
/* Don't call this directly; use Mix_LoadWAV_RW() for now. */
PSPL_AUDIO_SPEC *Mix_LoadOGG_RW(
	SDL_RWops *src,
	int freesrc,
	PSPL_AUDIO_SPEC *spec,
	u8 **audio_buf,
	u32 *audio_len);
#endif
