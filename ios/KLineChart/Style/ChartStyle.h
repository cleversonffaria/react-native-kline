//
//  ChartStyle.h
//  KLine-Chart-OC
//
//  Created by 何俊松 on 2020/3/10.
//  Copyright © 2020 hjs. All rights reserved.
//

#import "UIColor+RGB.h"

#define Color(rgbValue)  [UIColor rgbFromHex:rgbValue]

  //Box de informações
#define ChartColors_bgColor   Color(0xFF2F2F2F)
#define ChartColors_kLineColor   Color(0xFFf2f2f2)

#define ChartColors_gridColor   Color(0x202F2F2F)
#define ChartColors_ma5Color   Color(0xffC9B885)
#define ChartColors_ma10Color   Color(0xff6CB0A6)
#define ChartColors_ma30Color   Color(0xff9979C6)
#define ChartColors_upColor   Color(0xff4DAA90)
#define ChartColors_dnColor   Color(0xffC15466)
#define ChartColors_volColor   Color(0xff4729AE)

#define ChartColors_macdColor   Color(0xff4729AE)
#define ChartColors_difColor   Color(0xffC9B885)
#define ChartColors_deaColor   Color(0xff6CB0A6)

#define ChartColors_kColor   Color(0xffC9B885)
#define ChartColors_dColor   Color(0xff6CB0A6)
#define ChartColors_jColor   Color(0xff9979C6)
#define ChartColors_rsiColor   Color(0xffC9B885)

#define ChartColors_wrColor   Color(0xffD2D2B4)

#define ChartColors_yAxisTextColor   Color(0xff7632e2)  //Escala do eixo y direito
#define ChartColors_xAxisTextColor   Color(0xff7632e2)  //Escala de tempo abaixo


#define ChartColors_maxMinTextColor   Color(0xff70839E)  //cor de máximo e mínimo 

//Cor de profundidade
#define ChartColors_depthBuyColor   Color(0xff60A893)
#define ChartColors_depthSellColor   Color(0xffC15866)

//Cor linha e texto quando selecionada
#define ChartColors_markerLineColor   Color(0xff7632e2)

#define ChartColors_markerTextColor   Color(0xff7632e2)
#define ChartColors_markerBorderColor   Color(0xffcebceb)
#define ChartColors_markerBgColor   Color(0xffcebceb)

#define ChartColors_bottomMarkerTextColor   Color(0xffffffff)
#define ChartColors_bottomMarkerBorderColor   Color(0xff333333)
#define ChartColors_bottomMarkerBgColor    Color(0xff333333)

//Cores de linha ao vivo etc.
#define ChartColors_realTimeBgColor   Color(0xff7632e2)//(Not Working)

//linha ao vivo
#define ChartColors_realTimeLongLineColor   Color(0xff7632e2)


//Cor do texto no lado direito da tabela
#define ChartColors_reightTextColor   Color(0xff70839E)
#define ChartColors_bottomDateTextColor   Color(0xff70839E)

#define ChartColors_crossHlineColor   Color(0x207632e2)

static CGFloat dd = 11.0;
//点与点的距离（）不用这种方式实现
static CGFloat ChartStyle_pointWidth = 11.0;

    //espaçamento entre velas
static CGFloat ChartStyle_canldeMargin =  1.5;

    //Largura padrão da vela
static CGFloat ChartStyle_defaultcandleWidth =  8.5;

    //largura da vela
static CGFloat ChartStyle_candleWidth  = 8.5;

    //A largura da linha do meio da vela
static CGFloat ChartStyle_candleLineWidth =  1.5;

    //vol柱子宽度
static CGFloat ChartStyle_volWidth = 8.5;

    //macd柱子宽度
static CGFloat ChartStyle_macdWidth = 3.0;

    //largura da barra vertical
static CGFloat ChartStyle_vCrossWidth  = 0.5;

    //largura da barra horizontal
static CGFloat ChartStyle_hCrossWidth = 0.5;

    //Grade
static CGFloat ChartStyle_gridRows = 4;
   
static CGFloat ChartStyle_gridColumns = 5;

static CGFloat ChartStyle_topPadding = 30.0;
   
static CGFloat ChartStyle_bottomDateHigh = 20.0;
   
static CGFloat ChartStyle_childPadding = 25.0;

static CGFloat ChartStyle_defaultTextSize = 10;
   
static CGFloat ChartStyle_bottomDatefontSize = 10;
   
   //O preço do lado direito da tabela
static CGFloat ChartStyle_reightTextSize = 10;
