#
# Be sure to run `pod lib lint ZTTools.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ZTTools'
  s.version          = '0.1.0'
  s.summary          = '工具库'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
私有工具库，用到的东西都会放到这里，工具库也分为权限、逻辑、UI等
                       DESC

  s.homepage         = 'https://github.com/git/ZTTools'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = 'Nakiri'
  s.source           = { :git => 'https://github.com/git/ZTTools.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'
  
  s.xcconfig = {
      'OTHER_LDFLAGS' => '-ObjC'
  }

  s.source_files = 'ZTTools/Classes/**/*'
  # s.private_header_files = 'Pod/Classes/**/*.h'
  
  # s.resource_bundles = {
  #   'ZTTools' => ['ZTTools/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit', 'Foundation', 'Photos', 'UserNotifications', 'AVFoundation', 'CoreGraphics'
  # s.ios.library = 'xml2'
  s.dependency 'AFNetworking'
  s.dependency 'Masonry'
  
end
