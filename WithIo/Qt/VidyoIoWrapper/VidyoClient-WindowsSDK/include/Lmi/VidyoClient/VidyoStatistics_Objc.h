//
//	VidyoStatistics_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

#import "VidyoMediaFormats_Objc.h"
@class BandwidthSummaryStats;
@class LocalMicrophoneStats;
@class LocalRendererStats;
@class LocalRendererStreamStats;
@class LocalSpeakerStats;
@class LocalSpeakerStreamStats;
@class LocalVideoSourceStats;
@class MediaConnectionTransportInfo;
@class NetworkInterfaceStats;
@class ParticipantGenerationStats;
@class ParticipantStats;
@class RateShaperStats;
@class RemoteMicrophoneStats;
@class RemoteRendererStreamStats;
@class RemoteSpeakerStreamStats;
@class RemoteVideoSourceStats;
@class RoomStats;
@class UserStats;
@interface BandwidthSummaryStats : NSObject
{
	@public
	unsigned int actualEncoderBitRate;
	unsigned int availableBandwidth;
	unsigned int leakyBucketDelay;
	unsigned int retransmitBitRate;
	unsigned int targetEncoderBitRate;
	unsigned int totalTransmitBitRate;
}

@end
@interface EndpointStats : NSObject
{
	@public
	NSMutableString* applicationTag;
	NSMutableString* buildTag;
	NSMutableString* id;
	NSMutableString* libraryVersion;
	NSMutableArray* localCameraStats;
	NSMutableArray* localMicrophoneStats;
	NSMutableArray* localMonitorStats;
	NSMutableArray* localRendererStats;
	NSMutableArray* localSpeakerStats;
	NSMutableArray* localWindowShareStats;
	NSMutableArray* networkInterfaceStats;
	NSMutableString* osName;
	NSMutableString* osVersion;
	NSMutableString* processorBrand;
	unsigned int processorLogicalCores;
	NSMutableString* processorModel;
	unsigned int processorPhysicalCores;
	unsigned int processorSpeed;
	NSMutableString* timeStamp;
	NSMutableArray* userStats;
}

@end
@interface LocalMicrophoneStats : NSObject
{
	@public
	unsigned int aecEchoCoupling;
	unsigned int agcAverageGain;
	unsigned int bitsPerSample;
	MediaFormat format;
	NSMutableString* id;
	NSMutableArray* localSpeakerStreams;
	NSMutableString* name;
	unsigned int noiseSuppressionSnr;
	unsigned int numberOfChannels;
	NSMutableArray* remoteSpeakerStreams;
	unsigned int sampleRateMeasured;
	unsigned int sampleRateSet;
}

@end
@interface LocalRendererStats : NSObject
{
	@public
	MediaFormat format;
	long frameIntervalMeasured;
	long frameIntervalSet;
	size_t height;
	NSMutableString* id;
	NSMutableString* name;
	unsigned int totalFrames;
	unsigned int totalPixels;
	size_t width;
}

@end
@interface LocalRendererStreamStats : NSObject
{
	@public
	unsigned int bufferDropped;
	unsigned int bufferSize;
	size_t height;
	NSMutableString* id;
	NSMutableString* name;
	size_t width;
}

@end
@interface LocalSpeakerStats : NSObject
{
	@public
	unsigned int bitsPerSample;
	MediaFormat format;
	NSMutableString* id;
	NSMutableString* name;
	unsigned int numberOfChannels;
	unsigned int sampleRateMeasured;
	unsigned int sampleRateSet;
}

@end
@interface LocalSpeakerStreamStats : NSObject
{
	@public
	unsigned int bitsPerSample;
	long delay;
	MediaFormat format;
	long highThreshold;
	long highestThreshold;
	int lastEnergy;
	long lastPlayed;
	long lowThreshold;
	long lowestThreshold;
	long maxThreshold;
	NSMutableString* name;
	unsigned int numberOfChannels;
	long overrun;
	long played;
	unsigned int sampleRate;
	long underrun;
}

@end
@interface LocalVideoSourceStats : NSObject
{
	@public
	MediaFormat format;
	long frameIntervalMeasured;
	long frameIntervalSet;
	size_t height;
	NSMutableString* id;
	NSMutableArray* localRendererStreams;
	NSMutableString* name;
	NSMutableArray* remoteRendererStreams;
	unsigned int totalFrames;
	size_t width;
}

@end
@interface MediaConnectionTransportInfo : NSObject
{
	@public
	NSMutableString* addressType;
	NSMutableString* componentType;
	unsigned int connectionId;
	NSMutableString* connectionType;
	NSMutableString* externalLocalAddr;
	NSMutableString* externalRemoteAddr;
	NSMutableString* interfaceName;
	NSMutableString* interfaceType;
	NSMutableString* internalLocalAddr;
	NSMutableString* internalRemoteAddr;
	NSMutableString* transportPlugIn;
}

@end
@interface NetworkInterfaceStats : NSObject
{
	@public
	BOOL isUp;
	NSMutableString* name;
	NSMutableString* type;
}

@end
@interface ParticipantGenerationStats : NSObject
{
	@public
	NSMutableString* cameraId;
	NSMutableString* cameraName;
	BOOL enabled;
	long frameInterval;
	size_t height;
	NSMutableString* id;
	NSMutableString* name;
	unsigned long long pixelRate;
	size_t width;
}

@end
@interface ParticipantStats : NSObject
{
	@public
	NSMutableString* id;
	NSMutableString* name;
	NSMutableArray* remoteCameraStats;
	NSMutableArray* remoteMicrophoneStats;
	NSMutableArray* remoteWindowShareStats;
	NSMutableString* userId;
}

@end
@interface RateShaperStats : NSObject
{
	@public
	unsigned int delayNormal;
	unsigned int delayRetransmit;
	unsigned int dropNormal;
	unsigned int packetsNormal;
	unsigned int packetsRetransmit;
}

@end
@interface RemoteMicrophoneStats : NSObject
{
	@public
	unsigned int bitsPerSample;
	unsigned int codecDtx;
	NSMutableString* codecName;
	unsigned int codecQualitySetting;
	NSMutableString* id;
	NSMutableArray* localSpeakerStreams;
	NSMutableString* name;
	unsigned int numberOfChannels;
	size_t receiveNetworkBitRate;
	long receiveNetworkDelay;
	unsigned int receiveNetworkDroppedPackets;
	unsigned int receiveNetworkJitter;
	unsigned int sampleRateMeasured;
	unsigned int sampleRateSet;
}

@end
@interface RemoteRendererStreamStats : NSObject
{
	@public
	unsigned int codecFir;
	unsigned int codecIFrames;
	unsigned int codecLayers;
	unsigned int codecNacks;
	NSMutableString* codecName;
	unsigned int fps;
	unsigned int fpsInput;
	unsigned int fpsSent;
	size_t framesDropped;
	size_t height;
	size_t lastHeight;
	size_t lastWidth;
	NSMutableString* name;
	unsigned int sendNetworkBitRate;
	long sendNetworkRtt;
	size_t width;
}

@end
@interface RemoteSpeakerStreamStats : NSObject
{
	@public
	unsigned int bitsPerSample;
	unsigned int codecDtx;
	NSMutableString* codecName;
	unsigned int codecQualitySetting;
	NSMutableString* name;
	unsigned int numberOfChannels;
	unsigned int sampleRate;
	unsigned int sendNetworkBitRate;
	long sendNetworkRtt;
}

@end
@interface RemoteVideoSourceStats : NSObject
{
	@public
	size_t codecFir;
	size_t codecIFrames;
	size_t codecLayers;
	size_t codecNacks;
	NSMutableString* codecName;
	size_t fpsDecoded;
	size_t fpsDecoderInput;
	size_t fpsRendered;
	size_t height;
	NSMutableString* id;
	NSMutableArray* localRendererStreams;
	size_t maxStreamFrameRate;
	size_t maxStreamHeight;
	unsigned int maxStreamWidth;
	NSMutableString* name;
	size_t receiveNetworkBitRate;
	size_t receiveNetworkPacketsConcealed;
	size_t receiveNetworkPacketsLost;
	size_t receiveNetworkPacketsReordered;
	size_t receiveNetworkRecoveredWithFec;
	unsigned int showFrameRate;
	size_t showHeight;
	unsigned int showPixelRate;
	NSMutableString* showState;
	size_t showWidth;
	size_t width;
}

@end
@interface RoomStats : NSObject
{
	@public
	BandwidthSummaryStats* bandwidthApp;
	BandwidthSummaryStats* bandwidthAudio;
	BandwidthSummaryStats* bandwidthVideo;
	NSMutableString* conferenceId;
	unsigned int cpuUsage;
	unsigned long long currentBandwidthDecodePixelRate;
	unsigned long long currentBandwidthEncodePixelRate;
	unsigned long long currentCpuDecodePixelRate;
	unsigned long long currentCpuEncodePixelRate;
	NSMutableString* id;
	unsigned long long maxDecodePixelRate;
	unsigned long long maxEncodePixelRate;
	unsigned int maxVideoSources;
	NSMutableArray* participantGenerationStats;
	NSMutableArray* participantStats;
	RateShaperStats* rateShaperApp;
	RateShaperStats* rateShaperAudio;
	RateShaperStats* rateShaperVideo;
	unsigned long long receiveBitRateAvailable;
	unsigned long long receiveBitRateTotal;
	NSMutableString* reflectorId;
	unsigned long long sendBitRateAvailable;
	unsigned long long sendBitRateTotal;
	unsigned int staticSources;
	NSMutableArray* transportInformation;
}

@end
@interface UserStats : NSObject
{
	@public
	NSMutableString* host;
	NSMutableString* id;
	unsigned int port;
	NSMutableArray* roomStats;
	NSMutableString* serviceType;
}

@end
