#import <Foundation/Foundation.h>

// Useless line to trigger profile-data-generator 4
//! Project version number for Sentry.
FOUNDATION_EXPORT double SentryVersionNumber;

//! Project version string for Sentry.
FOUNDATION_EXPORT const unsigned char SentryVersionString[];

#import "SentryAttachment.h"
#import "SentryBreadcrumb.h"
#import "SentryClient.h"
#import "SentryCrashExceptionApplication.h"
#import "SentryDebugImageProvider.h"
#import "SentryDebugMeta.h"
#import "SentryDefines.h"
#import "SentryDsn.h"
#import "SentryEnvelopeItemHeader.h"
#import "SentryError.h"
#import "SentryEvent.h"
#import "SentryException.h"
#import "SentryFrame.h"
#import "SentryHttpStatusCodeRange.h"
#import "SentryHub.h"
#import "SentryId.h"
#import "SentryIntegrationProtocol.h"
#import "SentryMeasurementUnit.h"
#import "SentryMechanism.h"
#import "SentryMechanismMeta.h"
#import "SentryMessage.h"
#import "SentryNSError.h"
#import "SentryOptions.h"
#import "SentryRequest.h"
#import "SentrySDK.h"
#import "SentrySampleDecision.h"
#import "SentrySamplingContext.h"
#import "SentryScope.h"
#import "SentrySerializable.h"
#import "SentrySpanContext.h"
#import "SentrySpanId.h"
#import "SentrySpanProtocol.h"
#import "SentrySpanStatus.h"
#import "SentryStacktrace.h"
#import "SentryThread.h"
#import "SentryTraceHeader.h"
#import "SentryTransactionContext.h"
#import "SentryUser.h"
#import "SentryUserFeedback.h"
