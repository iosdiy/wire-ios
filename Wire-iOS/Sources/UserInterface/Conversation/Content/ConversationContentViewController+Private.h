// 
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
// 


/// Private material for conversationContentViewController.

#import "ConversationContentViewController.h"

#import "WAZUIMagicIOS.h"
#import <zmessaging/zmessaging.h>



@interface ConversationContentViewController ()

/// The cell whose tools are expanded in the UI. Setting this automatically triggers the expanding in the UI.
@property (nonatomic, strong, readwrite) id<ZMConversationMessage>messageWithExpandedTools;

@property (nonatomic) ZMConversationMessageWindow *messageWindow;

- (void)removeHighlightsAndMenu;

@end


@interface ConversationContentViewController (MessageWindow) <ZMConversationMessageWindowObserver>

- (void)expandMessageWindowUp;

@end
