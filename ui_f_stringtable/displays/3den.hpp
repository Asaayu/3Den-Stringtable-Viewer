class display3DEN {
  class Controls {
    class MenuStrip: ctrlMenuStrip {
      class Items {
        class Tools {
          items[] += {
            "Stringtable_Open"
            };
        };
        class Stringtable_Open {
          action = "findDisplay 313 createDisplay 'stringtable_viewer';";
          opensNewWindow = 1;
          text = "$STR_STRINGTABLE_OPEN";
          picture = "a3\3den\data\displays\display3den\entitymenu\findcreate_ca.paa";
        };
      };
    };
  };
};
