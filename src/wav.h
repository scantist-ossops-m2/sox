/* wav.h - various structures and defines used by WAV converter. */

#ifndef WAV_H_INCLUDED
#define WAV_H_INCLUDED

/* purloined from public Microsoft RIFF docs */

#define	WAVE_FORMAT_UNKNOWN		(0x0000U)
#define	WAVE_FORMAT_PCM			(0x0001U) 
#define	WAVE_FORMAT_ADPCM		(0x0002U)
#define WAVE_FORMAT_IEEE_FLOAT          (0x0003U)
#define	WAVE_FORMAT_ALAW		(0x0006U)
#define	WAVE_FORMAT_MULAW		(0x0007U)
#define	WAVE_FORMAT_OKI_ADPCM		(0x0010U)
#define WAVE_FORMAT_IMA_ADPCM		(0x0011U)
#define	WAVE_FORMAT_DIGISTD		(0x0015U)
#define	WAVE_FORMAT_DIGIFIX		(0x0016U)
#define WAVE_FORMAT_DOLBY_AC2           (0x0030U)
#define WAVE_FORMAT_GSM610              (0x0031U)
#define WAVE_FORMAT_ROCKWELL_ADPCM      (0x003bU)
#define WAVE_FORMAT_ROCKWELL_DIGITALK   (0x003cU)
#define WAVE_FORMAT_G721_ADPCM          (0x0040U)
#define WAVE_FORMAT_G728_CELP           (0x0041U)
#define WAVE_FORMAT_MPEG                (0x0050U)
#define WAVE_FORMAT_MPEGLAYER3          (0x0055U)
#define WAVE_FORMAT_G726_ADPCM          (0x0064U)
#define WAVE_FORMAT_G722_ADPCM          (0x0065U)
#define WAVE_FORMAT_EXTENSIBLE          (0xfffeU)

#endif /* WAV_H_INCLUDED */
