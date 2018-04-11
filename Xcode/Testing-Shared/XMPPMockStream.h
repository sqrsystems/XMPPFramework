//
//  XMPPStreamTest.h
//  XMPPFrameworkTests
//
//  Created by Andres Canal on 5/26/16.
//
//

@import XMPPFramework;

@interface XMPPMockStream : XMPPStream

- (void)fakeResponse:(NSXMLElement*)element;
- (void)fakeIQResponse:(XMPPIQ *) iq;
- (void)fakeMessageResponse:(XMPPMessage *) message;

@property (nonatomic, copy) void (^elementReceived)(__kindof XMPPElement *element);

@end
