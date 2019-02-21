Pod::Spec.new do |s|
  s.name                = 'TuSDK'
  s.version             = '3.0.7'
  s.summary             = 'TuSDK for iOS'
  s.homepage            = 'https://tutucloud.com/'
  s.license             = { :type => 'Commercial', :text => '© 2014–2019 TUTUCLOUD Technology Co., Ltd.' }
  s.author              = { 'TuSDK Team' => 'support@tusdk.com' }
  s.platform            = :ios, '6.0'
  s.source              = { :git => 'https://github.com/TuSDK/TuSDK-for-iOS.git', :tag => '3.0.7' }
  s.requires_arc        = true


  s.subspec 'Core' do |c|
    c.vendored_frameworks = 'TuSDK.framework'
  end

  s.subspec 'ImageGeeV1' do |i|
    i.vendored_frameworks = 'TuSDKGeeV1.framework'
    i.resources           = 'Localization/*.lproj'
  end

  s.subspec 'ImageGeeV2' do |i|
    i.vendored_frameworks = 'TuSDKGeeV2.framework'
    i.resources           = 'Localization/*.lproj'
  end

end
