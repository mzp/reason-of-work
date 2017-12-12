open ReactNative;

let press = () => ();

let buttonStyle =
  Style.(style([
               borderColor("gray"),
               borderWidth(1.),
               borderRadius(3.),
               width(100.),
               height(100.),
               margin(10.),
               justifyContent(`center),
               alignItems(`center)
  ]));

let app = () =>
  <View style=Style.(style([flex(1.), justifyContent(`center), alignItems(`center), flexDirection(`row)]))>
    <TouchableOpacity onPress=press style=buttonStyle>
      <Text value="home" style=Style.(style([fontSize(16.)])) />
    </TouchableOpacity>
    <TouchableOpacity onPress=press style=buttonStyle>
      <Text value="office" style=Style.(style([fontSize(16.)])) />
    </TouchableOpacity>
  </View>;
