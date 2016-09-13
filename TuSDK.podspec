Pod::Spec.new do |s|
  s.name                = 'TuSDK'
  s.version             = '2.5.1'
  s.summary             = 'TuSDK for iOS'
  s.homepage            = 'http://tusdk.com/'
  s.license             = { :type => 'Commercial', :text => '© 2014–2016 Lasque Technology Co., Ltd.' }
  s.author              = { 'TuSDK Team' => 'contact@tusdk.com' }
  s.platform            = :ios, '5.1.1'
  s.source              = { :git => 'https://github.com/TuSDK/TuSDK-for-iOS.git', :tag => '2.5.1' }
  s.requires_arc        = true

  s.subspec 'GPUImage' do |g|
    g.dependency            'GPUImage', '~> 0.1.6'
  end

  s.subspec 'Core' do |c|
    c.vendored_frameworks = 'TuSDK.framework'
  end

  s.subspec 'Image' do |i|
    i.vendored_frameworks = 'TuSDKGeeV1.framework'
    i.resources           = 'Localization/*.lproj'
  end

end
